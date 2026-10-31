/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00463d3b */

undefined4 __fastcall FUN_00463d3b(int *param_1,uint *param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar2 = param_1[4];
  if (iVar2 == param_1[3]) {
    uVar1 = FUN_00463c9b(param_1,iVar2 * 2 + 0x10);
    if ((char)uVar1 == '\0') {
      return uVar1;
    }
    iVar2 = param_1[4];
  }
  uVar3 = FUN_004878c0((uint *)(iVar2 * param_1[2] + param_1[6]),param_2,param_1[2]);
  param_1[4] = param_1[4] + 1;
  return (int)uVar3;
}

