/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400cc531 */

longlong * FUN_1400cc531(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1401073c0(*param_2,0,&Command::Command::RTTI_Type_Descriptor,
                        &Command::CommandSpecialClasses::ProFeature::RTTI_Type_Descriptor,0);
  if (lVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    if (param_2[1] == 0) {
      lVar3 = 0;
    }
    else {
      LOCK();
      piVar1 = (int *)(param_2[1] + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      lVar3 = param_2[1];
    }
    *param_1 = lVar2;
    param_1[1] = lVar3;
  }
  return param_1;
}

