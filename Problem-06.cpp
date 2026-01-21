struct stInfo 
{ 
 string FirstName; 
 string LastName; 
}; 
 
stInfo ReadInfo() 
{ 
 stInfo Info; 
 cout << "Please enter your First Name?" << endl; 
 cin >> Info.FirstName; 
 
 cout << "Please enter your Last Name?" << endl; 
 cin >> Info.LastName; 
 
 return Info; 
 
} 
 
string GetFullName(stInfo Info) 
{ 
 string FullName = ""; 
 FullName = Info.FirstName + " " + Info.LastName; 
 return FullName; 
 
} 
 
void PrintFullName(string FullName) 
{ 
 cout << "\n Your full name is :" << FullName << endl; 
 
} 
 
 
int main() 
{ 
 PrintFullName(GetFullName(ReadInfo())); 
};
