#include <stdio.h>

void main() {
	// 파일 : 컴퓨터 상에서 데이터가 저장되어 있는 기억 장소에 붙여진 이름
	// 메모리 상에 존재하는 데이터는 휘발성이지만, 파일이라는 기억 장소에 저장된 데이터는 비휘발성
	// 보통 하드 디스크, USB 이동식 디스크 등과 같이 영구 기억 장소에 저장됨

	// 스트림 : 데이터가 순서대로 입출력되는 논리적인 장치 (추상적인 개념)
	// 어떤 데이터에 접근하기 위해 필요한 인터페이스
	// 모든 장치에 대해 각각 입출력 인터페이스를 만드는 것은 번거로우니 어떤 장치든 접근 방법이 동일하게 인터페이스를 만들어놓고 사용 -> 호환성, 사용성 up
	// 스트림 형성 : 운영체제에서 관리 -> 어떤 스트림으로부터 데이터를 얼마나 쓸것인지, 어떻게 동작할 것인지에 대한 정보를 주면 운영체제에서 알아서 생성
	// 동작 구조 : 프로그램 -> 스트림 -> 모니터, 키보드, 프린터 등

	FILE* file;
	file = fopen_s(&file, "c:\\Temp.txt", "rt"); // Temp.txt 라는 파일과의 스트림 형성, 모드는 rt -> 텍스트 형태의 읽기 전용 모드

	if (file == NULL) {
		printf("파일이 존재하지 않습니다.\n");
	}

	if (file != NULL) {
		printf("파일 존재\n");
		fclose(file); // NULL이 아닌 경우에만 닫아야 함
	}
}
