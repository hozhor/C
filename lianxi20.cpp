main()
{
　int score;
　char grade;
　printf("please input a score\n");
　scanf("%d",&score);
　grade=score>=90?'a':(score>=60?'b':'c');
　printf("%d belongs to %c",score,grade);
}
