// https://codeforces.com/problemset/problem/1829/C
#include<iostream>
using std::cin;
using std::cout;
using std::endl;

// int main(){
//     int t_cases;
//     cin>>t_cases;
//     while (t_cases--)
//     {
//         int n, o_p=0, t_p=0, e_p=0;
//         cin>>n;
//         int one[n], ten[n], eleven[n];

//         // Taking input in different arrays based on skill availabitlity
//         for(int i=0;i<n;i++){
//             int m, s;
//             cin>>m>>s;
//             if(s==10){
//                 ten[t_p] = m;
//                 t_p++;
//             }
//             else if(s==1){
//                 one[o_p] = m;
//                 o_p++;
//             }
//             else if(s==11){
//                 eleven[e_p] = m;
//                 e_p++;
//             }
//         }

//         int answer = -1; // Default answer if there's no possible combination
        
//         // Finding the minimum amount of time to acquire skills
//         if(o_p!=0 && t_p!=0){
//         for(int i=0;i<o_p;i++){
//             for(int j=0;j<t_p;j++){
//                 int addition = one[i]+ten[j];
//                 if(answer==-1){
//                     answer = addition;
//                 }
//                 else{
//                     if(addition<answer) answer = addition;
//                 }
//             }
//         }
//         }

//         // Finding if one book offers both skills in least amount of time
//         for(int i=0;i<e_p;i++){
//             if(answer==-1){
//                 answer = eleven[i];
//             }
//             else{
//                 if(eleven[i]<answer) answer = eleven[i];
//             }
//         }

//         cout<<answer<<endl;
//     }
    
//     return 0;
// }


// int main(){
//     int t_cases;
//     cin>>t_cases;
//     while (t_cases--)
//     {
//         int n;
//         cin>>n;
//         int arr[n][2],count=0;

//         for(int i=0;i<n;i++){ // Taking input from the user
//             int m,b;
//             cin>>m>>b;
//             if(b==1||b==10||b==11){ // Adding only valid values
//                 arr[count][0]=m;
//                 arr[count][1]=b;
//                 count++;
//             }
//         }

//         int answer = -1;

//         for(int i=0;i<count;i++){
//             if(arr[i][1]==11){ // Checking whether it contains two skills or not
//                 if(answer==-1||answer>arr[i][0]) answer = arr[i][0]; 
//             }
//             else{
//                 for(int j=(i+1);j<count;j++){ // Searching from the next elements of the current element
//                     if(arr[j][1]==11){ // Checkiong it contains two skills
//                         if(answer>arr[j][0]) answer = arr[j][0];
//                     }
//                     else if(arr[j][1]!=arr[i][1]){ // If element arr[i][1] and element arr[i][1] are different
//                         if(answer==-1||answer>(arr[j][0]+arr[i][0])) answer = (arr[i][0]+arr[j][0]);
//                     }
//                 }
//             }
//         }

//         // for(int i=0;i<count;i++){
//         //     cout<<"["<<arr[i][0]<<","<<arr[i][1]<<"]";
//         // }
//         // cout<<endl;
//         cout<<answer<<endl;
//     }
    
//     return 0;
// }

int min(int a, int b){
    if(a<b) return a;
    return b;
}

int main(){
    int t_cases;
    cin>>t_cases;
    while (t_cases--)
    {
        int n,m,b, ele=0, ten=0, one=0;
        cin>>n;
        for(int i=0;i<n;i++){ // Taking input from the user
            cin>>m>>b;
            if(b==1){
                if(one==0 || m<one) one = m; // Inserting the smallest value in one other than 0
            }
            else if(b==10){
                if(ten==0 || m<ten) ten = m; // Inserting the smallest value in ten other than 0
            }
            else if(b==11){
                if(ele==0 || m<ele) ele = m; // Inserting the smallest value in ele other than 0
            }
        }

        int answer = -1, add;
        if(one!=0&&ten!=0) add = one+ten; // Checking whether two skills are present or not
        else add = 0;
        if(ele!=0&&add!=0) answer = min(ele, add); // Getting the smallest value
        else if(ele==0&&add!=0) answer = add; // Getting the valid value in answer
        else if(ele!=0&&add==0) answer = ele; // Getting the valid value in answer
        // cout<<"ele = "<<ele<<", one = "<<one<<", ten = "<<ten<<endl;
        // cout<<"add = "<<add<<endl;
        cout<<answer<<endl;
    }
    
    return 0;
}