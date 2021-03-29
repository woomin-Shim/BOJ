public class Main {
	// 1 << 3  =  1000
	static boolean getBit(int num, int i) {
		return (num & (1 << i)) != 0;  //0이 아니면 TRUE 반환
	}
	
	static int setBit(int num, int i) {  //i번째 비트를 1로 바꾸기, 비트를 0으로는 못바꿈(OR연산해보면 알끄야)
		return num | (1 << i);
	}
	static int clearBit(int num, int i) { // i번째 비트를 0으로 바꾸기
		return num & ~(1 << i); // 부호를 반전시켜주면 1000 -> 0111
	}
	static int clearLeftBit(int num, int i) { // i번째 비트부터 왼쪽 비트들을 모두 0으로
		return num & (1 << i) -1;     // 1000-1 = 0111이 된다, &연산보다  -연산우선순위가 높음 
		// ~(1000) 도 0111이 되지만 not 연산은 왼쪽비트들도 모두 반전시킨다. 따라서 1000-1은 왼쪽비트는 그대로 
	}
	static int clearRightBit(int num, int i) { //i번째 비트부터 오른쪽 비트들을 0으로 
		/* 모든 비트가 11111.. 인 숫자는 -1
		 * therefore, -1 을 인덱스+1(인덱스를 포함해서 0이니까) 왼쪽으로 쉬프트 해주고 AND
		 * https://www.youtube.com/watch?v=yHBYeguDR0A&t=1038s
		 * -1 = 111111....
		 * -1 << 3  ->  11111000                                                 
		 */
		return num & (-1 << (i+1));
	}
	static int updateBit(int num, int i, boolean val) { //i비트를 특정값으로 업데이트 
		return num & ~(1<<i) | ((val? 1: 0) << i);
	}
	public static void main(String[] args) {
		//11001
		System.out.println(getBit(25, 4));
		//0101
		System.out.println(getBit(5, 2));
		System.out.println(setBit(5, 1)); // 인덱스 1의 값을 1로 바꿔준다
		//10101001 
		System.out.println(clearBit(169, 3));
		//10101001
		System.out.println(clearLeftBit(169, 3));
		System.out.println(clearRightBit(169, 3));
		System.out.println(updateBit(169, 4, true));
	}
}

	/*
	 * value0 = 0x0001 in hexadecimal =  1 = 00000001 in binary
	   value1 = 0x0002 in hexadecimal =  2 = 00000010 in binary
       value2 = 0x0004 in hexadecimal =  4 = 00000100 in binary
       value3 = 0x0008 in hexadecimal =  8 = 00001000 in binary
       value4 = 0x0010 in hexadecimal = 16 = 00010000 in binary
	 */