/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10167b24 */

void __fastcall FUN_10167b24(undefined4 *param_1,undefined4 param_2,undefined2 param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if (0 < param_4) {
    puVar2 = param_1 + 5;
    iVar1 = param_4;
    do {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0xffffffff;
      *(undefined2 *)(puVar2 + 3) = 0xffff;
      *(byte *)((int)puVar2 + 0xe) = *(byte *)((int)puVar2 + 0xe) & 0xe0 | 0xc;
      puVar2 = puVar2 + 4;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *param_1 = param_2;
  *(undefined2 *)(param_1 + 3) = param_3;
  *(short *)((int)param_1 + 0xe) = (short)param_4;
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}

