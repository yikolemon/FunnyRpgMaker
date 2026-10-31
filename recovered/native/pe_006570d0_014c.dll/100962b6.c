/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100962b6 */

undefined4 * __thiscall FUN_100962b6(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1008a8bc(param_2 + 4);
  FUN_100128b2(param_2 + 7);
  FUN_1009bb48(param_2 + 0xd);
  FUN_100128b2(param_2 + 0x10);
  FUN_100128b2(param_2 + 0x16);
  FUN_10097b6a(param_2 + 0x1c);
  FUN_1008a8bc(param_2 + 0x1f);
  FUN_1009bb7c(param_2 + 0x22);
  FUN_1009bbb0(param_2 + 0x25);
  FUN_1008a8bc(param_2 + 0x28);
  iVar4 = 0xac;
  do {
    FUN_100128b2((int)param_2 + iVar4);
    iVar4 = iVar4 + 0x18;
  } while (iVar4 != 0xa0c);
  FUN_100128b2(param_2 + 0x283);
  FUN_100128b2(param_2 + 0x289);
  param_1[0x28f] = param_2[0x28f];
  *(undefined1 *)(param_1 + 0x290) = *(undefined1 *)(param_2 + 0x290);
  return param_1;
}

