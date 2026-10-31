/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180177488 */

void FUN_180177488(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      lVar2 = *(longlong *)(param_1 + 200);
    }
    else {
      if (*(longlong *)(param_1 + 0x10) == 0) {
        lVar2 = *(longlong *)(param_1 + 0xc0);
      }
      else {
        lVar2 = *(longlong *)(param_1 + 0xc0);
        iVar3 = (int)*(undefined8 *)(param_1 + 200) - (int)lVar2;
        iVar1 = param_2 - iVar3;
        if (iVar1 != 0 && iVar3 <= (int)param_2) {
          *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 200);
                    /* WARNING: Could not recover jumptable at 0x0001801774c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(param_1 + 0x18))
                    (*(undefined8 *)(param_1 + 0x28),iVar1,*(code **)(param_1 + 0x18));
          return;
        }
      }
      lVar2 = (ulonglong)param_2 + lVar2;
    }
    *(longlong *)(param_1 + 0xc0) = lVar2;
  }
  return;
}

