// #include <iostream>
// #include <string>

// using namespace std;

// int main(){
// 	string str;
// 	getline(cin,str);

	
// }


/////////////////////////---------------------//////////////////////


// #include <iostream>
// #include <string>

// using namespace std;

// int main(){
// 	string s = "Nothing";
// 	int ct = 0;

// 	// for( int i=0; s[i]!='\0'; i++){
// 	// 	ct++;
// 	// }
// 	// cout << ct << '\n';

// 	string::iterator it;
// 	for( it=s.begin(); it!=s.end(); it++){
// 		ct++;
		   
// 		// cout << *it;
// 	}
// 	if( *it == '\0' ){
// 		cout << "yes" << '\n';
// 	}
// 	// cout << '\n' << ct << '\n';
// 	// cout << *it; // cant be used outside the loop???
// 	return 0;

// }


///////////////////////-----------------------------//////////////////


// #include <iostream>
// #include <string>

// using namespace std;

// int main(){
// 	string s = "janeman";

// 	string::iterator it;

// 	for( it=s.begin(); it!=s.end(); it++){
// 		*it = *it - 32;
// 		cout << *it ;
// 	}

 
// 	return 0;
// }


//////////////////-------------//////////////////


// #include <iostream>
// #include <string>

// using namespace std;

// int main(){
// 	string s = "Jane Mann";

// 	// char destination[10];
// 	// s.copy( destination, s.length() );
// 	// cout << destination << "\n";

// 	// cout << s.find("ane") << '\n'; // it'll tell the position of the string
// 	//cout << s.find('a') << '\n'; 

// 	// cout << s.find_first_of(' ') << '\n';
// 	// cout << s.find_last_of(' ') << '\n';

// 	// cout << s.substr(0,3) << '\n';

// 	// string s2 = "jane";
// 	// cout << s.compare(s2) << '\n';


// 	// cout << s << "\n";

// 	return 0;
// }


///////////////////////-------------------------///////////////


// #include <iostream>
// #include <string>

// using namespace std;

// int main(){
// 	string s = "telegram";

// 	// s.append("bye");
// 	// s.insert(4,"R");
// 	// s.insert(5,"RRR");
// 	// s.replace(2,5,"YYY");
// 	// s.erase();
// 	// s.push_back('X');
// 	// s.pop_back();
// 	// string s2 = "Whatsapp";
// 	// s.swap(s2);
// 	// cout << s2 <<"\n";

// 	cout << s <<"\n";

// 	return 0;
// }


////////////////-------------------------///////////


// #include <iostream>
// #include <string>

// using namespace std;

// int main(){
// 	string s = "Institution";

// 	// cout << s.length() << endl;
// 	// cout << s.size() << endl;
// 	// cout << s.capacity() << endl;
// 	// s.resize(36);
// 	// cout << s.capacity() << endl;
// 	// cout << s.resize(36) << endl; // wont work
// 	s.clear();
// 	// cout << s << endl;
// 	// cout << s.size() << endl;
// 	// cout << s.capacity() << endl;
	
	
// 	s.empty();
// 	if( s.empty() ){
// 		cout << "String Is Empty\n";
// 	} else {
// 		cout << "String is : " << s << '\n';
// 	}
	
// 	return 0;
// }


/////////////////////--------------------------///////////////////


// //printing a string >> input using cin >> input using getline >> overwriting a string >> checking multiple word reading

// #include <iostream>
// #include <string.h>
// #include <cstring>

// using namespace std;

// int main(){
// 	string str;
// 	// cin >> str;
// 	// cout << str << endl;
// 	// cin >> str;
// 	// cout << str << endl;

// 	cin >> str;
// 	cin.ignore(); // for buffer
// 	getline(cin,str);
// 	cout << str << endl; // string has been overwritten 

// 	// char s[10] = "HelloWorl";
// 	// cout << s << endl;
// 	// cin.getline(s,10);
// 	// cout << s;
// 	// // cin.ignore();
// 	// cin.getline(s,10);
// 	// cout << s;
// 	return 0;
// }


///////////////////--------------------------///////////////////////


// #include <iostream>
// #include <cstring>
// #include <string.h>

// using namespace std;

// int main(){
// 	// char s[10] = "22";
// 	// char s2[10] = "69.69";
// 	// long int x = strtol(s,NULL,10);
// 	// float y = strtof(s2,NULL);

// 	// cout<<x<<endl<<y<<endl;

// 	char s5[] = "x=12;y=13;z=14";
// 	char *token = strtok(s5,";");

// 	while( token != NULL){
// 		cout<< token << endl;
// 		token = strtok(NULL,";");
// 	}

// 	return 0;
// }


///////////////////--------------------------///////////////////


// #include <iostream>
// #include <cstring>
// #include <string.h>
// using namespace std;

// int main(){
// 	char s1[] = "institution";
// 	char s2[] = "tut";

// 	// if( strstr(s1,s2) !=0 ){
// 	// 	cout << strstr(s1,s2) << endl; // prints thr string starting from s2 till the end of s1
// 	// } else {
// 	// 	cout << "Not found!" << endl;
// 	// }

// 	// char s3[] = "institution";

// 	// if( strchr(s3,'t') != 0){
// 	// 	cout << strchr(s3,'t') << endl;
// 	// } else {
// 	// 	cout << "Not Found!" << endl;
// 	// }

// 	// if( strrchr(s3,'t') != 0){
// 	// 	cout << strrchr(s3,'t') << endl;
// 	// } else {
// 	// 	cout << "Not Found!" << endl;
// 	// }

// 	char s5[] = "Great";
// 	char s6[] = "great";

// 	cout << strcmp(s5,s6) << endl;
// 	cout << strcmp(s6,s5) << endl;
// 	cout << strcmp(s5,s5) << endl;


// 	return 0;
// }


///////////////////////-------------------------------///////////////////////


// #include <iostream>
// #include <string.h>
// #include <cstring>
// using namespace std;

// int main(){

// 	// char *s3 = "Hello!";
// 	// string s3 = "Hellllllooo!";

// 	// cout << strlen(s3) << endl;

// 	char s1[20] = "Hii";
// 	char s2[20] = " There";
// 	char s4[20] = "";

// 	// cout << strcat(s1,s2) << endl;
// 	// cout << strncat(s1,s2,4) << endl;
// 	cout << strcpy(s4,s2) << endl;
// 	// cout << strncpy(s4,s2,2) << endl;

// 	return 0;

// }


///////////////////--------------------///////////////////////


// #include <iostream>
// #include <cstring>
// #include <string.h>
// using namespace std;

// int main(){
// 	char s[10];
// 	char s2[10];
// 	cout << "Enter Name: " << endl;
	
// 	// cin.getline(s,10);
// 	cin.get(s,10);
// 	cout << "Name is: " << s << endl;

// 	cin.ignore(); // ignores the values in buffer which are recived from the keyboard

// 	cout <<"Enter Name Again: " << endl;
// 	// cin.getline(s,10);
// 	cin.get(s,10);
// 	cout << "Name is: " << s;// << endl;
// 	return 0;
// }


/////////////-------------------/////////////////


// #include <iostream>
// using namespace std;

// int main(){
// 	// char x = 'A';
// 	// cout << X << endl;
// 	// char S[10] = "Hello";
// 	// char S[] = "Hello";
// 	// char S[] = {'H','E','L','L','O','\0'};
// 	// char S[] = { 66,67,68,69,'\0'};
// 	char *S = "Hello";

// 	cout << S << endl;
// }


//////////////////-----------------------------STRINGS-------------------------------------///////////////////


////////////////////------------------///////////////////


// #include <iostream>
// using namespace std;

// int main(){
// 	int c = 10;
// 	int *b = &c;
// 	int *&a = b;

// 	cout<<c<<endl;
// 	cout<<b<<endl;
// 	cout<<a<<endl;

// 	return 0;

// }

//////----------//////

// #include <iostream>
// using namespace std;

// int main(){
// 	int A[3]= {1,2,3};
// 	int B[]= {4,5,6};

// 	int *p = &A[3];
// 	//int *p = &A[]; index is needed

// 	int *q = A;

// 	return 0;
// }


////////--------------/////////

// #include <iostream>
// using namespace std;

// int main(){
// 	int x = 0;
// 	int &y = x;

// 	cout<<x<<endl;
// 	cout<<y<<endl;

// 	return 0;
// }

////////////-----------------////////////////

// #include <iostream>
// using namespace std;

// int main(){
// 	int A[5]= {0,1,2,3,4};
// 	int *p = A, *q;
// 	q = p + 2;

// 	cout<<*p<<endl;
// 	cout<<p<<endl;
// 	cout<<*(++p)<<endl;
// 	cout<<*(p--)<<endl;
// 	cout<<*q<<endl;
// 	cout<<q--<<endl;
	

// 	return 0;
// }

///////----------------------------/////////

// #include <iostream>
// using namespace std;

// int main(){
// 	int *p = new int [5];

// 	p[1]= 0;
// 	p[2]= 1;
// 	cout<<p[1]<<" "<<p[2]<<endl;
// 	delete []p;
// 	cout<<p[1]<<" "<<p[2]<<endl;

// 	return 0;
// }


// #include <iostream>
// using namespace std;

// int main(){

// 	int a = 10;
// 	int *p = &a;

// 	cout<<a<<endl;
// 	cout<<&a<<endl;
// 	cout<<p<<endl;
// 	cout<<&p<<endl;
// 	cout<<*p<<endl;

// 	return 0;
// }






// input an array of size N
// sort out even elements and odd elements
// op the indexes of the pairs then

// #include <iostream>
// using namespace std;

// int main() {
// 	 int N,ec=0,oc=0,C= 0;
// 	int A[N],E[N],O[N];
// 	cin>>N;

// 	for( int i=0; i<N; i++){
// 		cin>>A[i];
// 	}

// 	for( int i=0 ; i<N; i++){
// 		if(A[i]%2 == 0){
// 			E[ec++] = A[i];
// 		}
// 		else{
// 			O[oc++] = A[i];
// 		}
// 	}
// 	cout<<ec<<" "<<oc<<endl;

// 	cout<<endl;

// 	if( ec<2  && oc <2){
// 		cout<<0<<endl;
// 	}
// 	else if( ec<2	){
// 		cout<<((oc)*(oc -1))/2<<endl;
// 	}
// 	else if( oc <2){
// 		cout<<((ec)*(ec -1))/2<<endl;
// 	}
// 	else{
		
// 	}
// 	cout<<((oc)*(oc -1))/2<<endl;
// 	C = C + ((oc)*(oc -1))/2;
// 	cout<<((ec)*(ec -1))/2<<endl;
// 	C = C + ((ec)*(ec -1))/2;
// 	cout<<C<<endl;
// 	cout<< (((oc)*(oc -1))/2) + (((oc)*(oc -1))/2)  << endl;

// 	return 0;
// }

