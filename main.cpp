#include <memory>
#include <cstdio>
#include <vector>

struct TEST {
	TEST(int v) {
		printf("constractor\n");
		i = 100 + v;
	}
	~TEST() {
		printf("destractor %d\n", i);
	}

	int i;
};
int main(int argc, char** argv) {
	std::vector<std::shared_ptr<TEST>> list;

	std::shared_ptr<TEST> p;
	for (auto i = 0; i < 10; i++) {
		p = std::make_shared<TEST>(i);
		list.push_back(p);
	}
	printf("kudo\n");

	p = list.at(1);
	printf("%d\n", p->i);
	p->i += 100;
	return 0;
}
