/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021a9a4 */

void FUN_18021a9a4(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  
  FUN_18021ae19();
  *(undefined4 *)(param_1 + 0x4930) = param_2;
  *(undefined4 *)(param_1 + 0x4920) = param_2;
  *(undefined4 *)(param_1 + 0x4934) = param_3;
  *(undefined4 *)(param_1 + 0x4924) = param_3;
  *(undefined1 *)(param_1 + 0x48d7) = 1;
  lVar1 = param_1 + 0x10;
  cVar3 = FUN_18000d3bc(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x48e8);
  if (cVar3 != '\0') {
    cVar3 = FUN_18021bc8a(uVar2);
    if (cVar3 == '\0') goto LAB_18021aa22;
  }
  FUN_18021b641(lVar1,*(undefined8 *)(param_1 + 0x48d8),*(undefined8 *)(param_1 + 0x48e0),uVar2,
                *(undefined4 *)(param_1 + 0x48f0),0);
LAB_18021aa22:
  FUN_1802a82f0(param_1 + 0x1838,lVar1,0x1828);
  return;
}

