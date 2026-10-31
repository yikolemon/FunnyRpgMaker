/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a60d2 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_1407a60d2(longlong param_1)

{
  char *pcVar1;
  uint uVar2;
  byte bVar4;
  undefined7 uVar5;
  uint uVar6;
  byte *unaff_RDI;
  longlong unaff_R13;
  longlong in_FS_OFFSET;
  undefined4 *puVar3;
  ulonglong uVar7;
  
  uVar5 = (undefined7)((ulonglong)param_1 >> 8);
  bVar4 = (byte)param_1;
  uVar6 = (int)&stack0xfffffffffffffff0 - 0x1c;
  uVar7 = (ulonglong)uVar6;
  uVar2 = (int)&stack0xfffffffffffffff8 - 0x10;
  puVar3 = (undefined4 *)(ulonglong)uVar2;
  puVar3[-1] = uVar6;
  puVar3[2] = 0xffffffff;
  puVar3[1] = 0x10156240;
  *puVar3 = *(undefined4 *)(in_FS_OFFSET + 0x1407a60f4);
  *(uint *)(in_FS_OFFSET + 0x5189d23100000000) = uVar2;
  *(byte *)(param_1 + 0x51890451) = *(byte *)(param_1 + 0x51890451) | bVar4;
  *(ulonglong *)(uVar7 - 8) = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  *(undefined8 *)(uVar7 - 0x10) = 0x1407a610e;
  func_0x00014f82b197();
  *(byte **)(uVar7 - 0x10) = unaff_RDI;
  *unaff_RDI = *unaff_RDI >> 1 | *unaff_RDI << 7;
  *(byte *)(unaff_R13 + 0x9881) = *(byte *)(unaff_R13 + 0x9881) ^ bVar4;
  pcVar1 = (char *)(CONCAT71(uVar5,bVar4) + 0x45c7e045);
  *pcVar1 = *pcVar1 + bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

