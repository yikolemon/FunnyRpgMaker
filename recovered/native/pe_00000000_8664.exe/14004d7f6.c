/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14004d7f6 */

void FUN_14004d7f6(uint param_1,ulonglong param_2,longlong param_3)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  
  uVar3 = (uint)param_2;
  if (param_1 - 1 == 0) {
    uVar1 = 0;
  }
  else {
    puVar5 = (undefined2 *)((ulonglong)param_1 + param_3);
    uVar1 = 0;
    do {
      puVar5 = puVar5 + -1;
      iVar2 = (int)param_2;
      uVar4 = param_2 & 0xffffffff;
      param_2 = uVar4 / 100;
      uVar3 = (uint)param_2;
      *puVar5 = *(undefined2 *)
                 (&DAT_1401cdb00 + (ulonglong)(uint)(iVar2 + (int)(uVar4 / 100) * -100) * 2);
      uVar1 = uVar1 + 2;
    } while (uVar1 < param_1 - 1);
  }
  if ((uint)uVar1 < param_1) {
    *(byte *)(param_3 + (ulonglong)(param_1 + ~(uint)uVar1)) =
         (char)uVar3 + (char)(uVar3 / 10) * -10 | 0x30;
  }
  return;
}

