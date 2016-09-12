#include"Smart_Pointer_hearder.h"
#include<memory>
int main() {
	{
		auto_ptr<Report> ps(new Report("Using auto_ptr"));
		ps->comment();
	}
	{
		shared_ptr<Report> ps(new Report("Using shard_ptr"));
		ps->comment();
	}
	{
		unique_ptr<Report> ps(new Report("Using unique_ptr"));
		ps->comment();
	}
	return 0;
}