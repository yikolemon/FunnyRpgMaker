/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00462d54 */

ulonglong __fastcall FUN_00462d54(int *param_1,int param_2,int param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  char cVar3;
  ulonglong uVar4;
  
  FUN_00463144(param_1);
  param_1[0xb75] = param_2;
  param_1[0xb71] = param_2;
  param_1[0xb76] = param_3;
  param_1[0xb72] = param_3;
  *(undefined1 *)((int)param_1 + 0x2d8f) = 1;
  puVar1 = (uint *)(param_1 + 2);
  cVar3 = FUN_00463d78((int)puVar1);
  puVar2 = (undefined4 *)param_1[0xb66];
  if (cVar3 != '\0') {
    cVar3 = FUN_00463d7c((int)puVar2);
    if (cVar3 == '\0') goto LAB_00462dc1;
  }
  FUN_0046385b((int *)puVar1,param_1[0xb64],param_1[0xb65],puVar2,param_1[0xb67],'\0');
LAB_00462dc1:
  uVar4 = FUN_004878c0((uint *)(param_1 + 0x3c9),puVar1,0xf1c);
  return uVar4;
}

