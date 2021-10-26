import java.util.ArrayList;
import java.util.HashMap;

public class Count_1 {
    public static void main(String[] args) {
        String text = "In China, almost all of us have read the prevalent book The Romance of the Three Kingdoms. What we admire most may be the virtue of kindness of LiuBei, the loyalty of GuanYu and the bravery of  ZhangFei. But in terms of CaoCao, what most of us think about is that he was a treacherous and evil person but not a giant. Is that right? In fact, CaoCao was a great statesman,militarist and poet in history. Firstly, he could tolerate others actually. Not like what was recorded in the novel, he valued talent and was able to rule the empire well. As a result, that's why I say he was an excellent giant as a statesman. Secondly,he was a great general. For example,in the battle of Guandu, CaoCao used a trick to surprise Yuan Shao.It was a famous battle in which fewer won. There is no doubt that he was a great military giant. Thirdly, when it comes to literature, Cao Cao's literary level is even more amazing. His works are not only literary but also philosophical. And his poetry is majestic. Without his works, the literary history of that era would be dim. That'?s to say, he was a giant of the history of Chinese literature. For all these reasons above,that's why he was a giant I admire most.  From CaoCao, we can learn a lot of virtues. As a saying goes:\"A great man knows when to yield and when not.\" I am deeply influenced by the tolerance of CaoCao. I can also learn about his perception of the situation. Only a person has insight into the situation, can grasp the opportunity. In my reflection, we should give CaoCao a fair judgement. ";
        top3(text);

    }

    public static void top3(String s) {
        // todo 写完这个方法！
        s = s.toLowerCase();// 全部转化为小写
        // 找出所有分隔符号，获得单词
        s = s.replace(' ', ',');
        s = s.replace('.', ',');
        s = s.replace('\n', ',');
        String[] words = s.split(",*,");
        HashMap<String, Integer> map = new HashMap<String, Integer>();
     //   System.out.println(s);
        // 统计单词个数
        for (String word : words) {
           //  System.out.println(word);
           //  if(word=='') continue;
            if (map.get(word) == null) {
                map.put(word, 1);
            } else
                map.put(word, map.get(word) + 1);

           // System.out.println(map);
        }
        ArrayList<Word> list = new ArrayList<Word>();
        for(String word : words) {
            if(map.get(word)!=-1) {
               list.add(new Word(word,map.get(word))); 
               map.put(word, -1);//打上标记，表示已经取出来了。
            }
        }

        //开始排序
        for(int i = 0;i< list.size();i++) {
            for(int j = 0;j<list.size()-1;j++) {
                if(list.get(j).getCnt()<list.get(j+1).getCnt()) {
                    Word tmp = new Word(list.get(j).getName(), list.get(j).getCnt());
                    list.set(j, list.get(j+1));
                    list.set(j+1, tmp);
                }
            }
        }
        
        //输出top3
        if(list.size()<3) {
            System.out.println("No Enough Words!");
            return;
        }
    
        for(int i = 0;i<3;i++) {
            System.out.println(list.get(i).getName());
        }
        return ;
    }

}

class Word {
    private int cnt;
    private String name;
    Word(String name,int cnt) {
        this.name = name;
        this.cnt = cnt;
    }
    public int getCnt() {
        return cnt;
    }
    public String getName() {
        return name;
    }
    public void setCnt(int cnt) {
        this.cnt = cnt;
    }
    public void setName(String name) {
        this.name = name;
    }
}