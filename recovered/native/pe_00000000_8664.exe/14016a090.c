/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016a090 */

void FUN_14016a090(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  
  FUN_14016a505();
  *(undefined4 *)(param_1 + 0x4930) = param_2;
  *(undefined4 *)(param_1 + 0x4920) = param_2;
  *(undefined4 *)(param_1 + 0x4934) = param_3;
  *(undefined4 *)(param_1 + 0x4924) = param_3;
  *(undefined1 *)(param_1 + 0x48d7) = 1;
  lVar1 = param_1 + 0x10;
  cVar3 = FUN_14001c290(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x48e8);
  if (cVar3 != '\0') {
    cVar3 = FUN_14016b376(uVar2);
    if (cVar3 == '\0') goto LAB_14016a10e;
  }
  FUN_14016ad2d(lVar1,*(undefined8 *)(param_1 + 0x48d8),*(undefined8 *)(param_1 + 0x48e0),uVar2,
                *(undefined4 *)(param_1 + 0x48f0),0);
LAB_14016a10e:
  FUN_1401c5180(param_1 + 0x1838,lVar1,0x1828);
  return;
}

