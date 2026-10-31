/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c2003 */

void FUN_101c2003(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = *(int *)(param_3 + 0xc);
  if (*(code **)(param_2 + 0x78) != (code *)0x0) {
    (**(code **)(param_2 + 0x78))(*(undefined4 *)(param_2 + 0x74));
  }
  while (*(int *)(param_2 + 0x54) != 0) {
    FUN_101c1154(*(int *)(param_2 + 0x54));
  }
  FUN_101c5928(param_2 + 0x6c,FUN_101c22f6,param_1,param_3);
  *(undefined4 *)(param_2 + 0x58) = 0;
  FUN_101c5e67();
  pcVar2 = *(code **)(iVar1 + 0x34);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_2);
  }
  FUN_101c0a65(*(undefined4 *)(param_2 + 0x68),*(uint *)(param_2 + 8) >> 10 & 1);
  *(undefined4 *)(param_2 + 0x68) = 0;
  if (*(code **)(param_2 + 0x30) != (code *)0x0) {
    (**(code **)(param_2 + 0x30))(param_2);
  }
  if (*(int *)(param_2 + 0x80) != 0) {
    FUN_101c0017(param_1,*(int *)(param_2 + 0x80));
    *(undefined4 *)(param_2 + 0x80) = 0;
  }
  FUN_101c0017();
  return;
}

