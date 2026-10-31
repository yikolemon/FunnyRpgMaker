/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005979a */

int FUN_14005979a(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  puVar6 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    puVar6 = (undefined8 *)*param_2;
  }
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  uVar5 = uVar2;
  if (uVar1 < uVar2) {
    uVar5 = uVar1;
  }
  uVar4 = thunk_FUN_14018b6d0(param_1,puVar6,uVar5);
  if (uVar4 == uVar5) {
    iVar3 = (int)(char)((uVar2 >= uVar1 && uVar2 != uVar1) - (uVar2 < uVar1));
  }
  else {
    iVar3 = (uint)(*(ushort *)((longlong)puVar6 + uVar4 * 2) <=
                  *(ushort *)((longlong)param_1 + uVar4 * 2)) * 2 + -1;
  }
  return iVar3;
}

