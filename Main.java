public class Main {
	// 1 << 3  =  1000
	static boolean getBit(int num, int i) {
		return (num & (1 << i)) != 0;  //0�� �ƴϸ� TRUE ��ȯ
	}
	
	static int setBit(int num, int i) {  //i��° ��Ʈ�� 1�� �ٲٱ�, ��Ʈ�� 0���δ� ���ٲ�(OR�����غ��� �˲���)
		return num | (1 << i);
	}
	static int clearBit(int num, int i) { // i��° ��Ʈ�� 0���� �ٲٱ�
		return num & ~(1 << i); // ��ȣ�� ���������ָ� 1000 -> 0111
	}
	static int clearLeftBit(int num, int i) { // i��° ��Ʈ���� ���� ��Ʈ���� ��� 0����
		return num & (1 << i) -1;     // 1000-1 = 0111�� �ȴ�, &���꺸��  -����켱������ ���� 
		// ~(1000) �� 0111�� ������ not ������ ���ʺ�Ʈ�鵵 ��� ������Ų��. ���� 1000-1�� ���ʺ�Ʈ�� �״�� 
	}
	static int clearRightBit(int num, int i) { //i��° ��Ʈ���� ������ ��Ʈ���� 0���� 
		/* ��� ��Ʈ�� 11111.. �� ���ڴ� -1
		 * therefore, -1 �� �ε���+1(�ε����� �����ؼ� 0�̴ϱ�) �������� ����Ʈ ���ְ� AND
		 * https://www.youtube.com/watch?v=yHBYeguDR0A&t=1038s
		 * -1 = 111111....
		 * -1 << 3  ->  11111000                                                 
		 */
		return num & (-1 << (i+1));
	}
	static int updateBit(int num, int i, boolean val) { //i��Ʈ�� Ư�������� ������Ʈ 
		return num & ~(1<<i) | ((val? 1: 0) << i);
	}
	public static void main(String[] args) {
		//11001
		System.out.println(getBit(25, 4));
		//0101
		System.out.println(getBit(5, 2));
		System.out.println(setBit(5, 1)); // �ε��� 1�� ���� 1�� �ٲ��ش�
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