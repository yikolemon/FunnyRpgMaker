/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140a090ff */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000140a09146) overlaps instruction at (ram,0x000140a09144)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Unwind_140a090ff(undefined8 param_1,longlong param_2)

{
  byte *in_RAX;
  longlong lVar1;
  byte *pbVar2;
  undefined8 unaff_RBX;
  byte *pbVar4;
  longlong unaff_RSI;
  byte bVar3;
  
  lVar1 = CONCAT71((int7)((ulonglong)in_RAX >> 8),
                   (byte)in_RAX ^ *(byte *)(param_2 + 0x48 + unaff_RSI));
  pbVar4 = (byte *)CONCAT71((int7)(CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),
                                            CONCAT11((byte)((ulonglong)unaff_RBX >> 8) ^ *in_RAX ^
                                                     *(byte *)(param_2 + unaff_RSI),(byte)unaff_RBX)
                                           ) >> 8),
                            (byte)unaff_RBX ^ *(byte *)(param_2 + 0x60 + unaff_RSI));
  bVar3 = (byte)((ulonglong)param_2 >> 8) ^ *(byte *)(lVar1 + 0x32);
  pbVar2 = (byte *)CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(bVar3,(char)param_2));
  if (bVar3 != 0) {
    if ((char)bVar3 < '\0') {
      if (-1 < (int)((uint)&stack0xfffffffffffffff8 ^ *(uint *)(lVar1 + 0x33))) {
        *pbVar4 = *pbVar4 ^ 0x84;
        *pbVar4 = *pbVar4 << 4;
      }
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    *pbVar2 = *pbVar2 ^ 0x98;
    bVar3 = bVar3 ^ 0x32 ^ (byte)((uint)_DAT_d0320032 >> 8) ^
            (byte)((uint)*(undefined4 *)(pbVar4 + unaff_RSI) >> 8);
    *pbVar4 = *pbVar4 - bVar3;
    *pbVar4 = *pbVar4 & bVar3;
    *pbVar4 = *pbVar4 - bVar3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

