/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100de933 */

void FUN_100de933(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int *unaff_FS_OFFSET;
  undefined1 local_28 [4];
  int *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_28;
  local_14 = 0xffffffff;
  local_18 = &LAB_100ea830;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_100dea74(param_1);
  local_14 = 0;
  FUN_1002265a(local_28);
  piVar2 = local_24;
  local_14 = 0xffffffff;
  if (local_24 != (int *)0x0) {
    LOCK();
    piVar1 = local_24 + 1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_24)();
      LOCK();
      piVar1 = piVar2 + 2;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*piVar2 + 4))();
      }
    }
  }
  FUN_100deb5e();
  cVar3 = (**(code **)(*DAT_1039d258 + 0xc))();
  DAT_10388f90 = 1;
  if (cVar3 != '\0') {
    DAT_10388f90 = DAT_1039d418 ^ 1;
  }
  FUN_1002181a(&LAB_100df3a4);
  local_14 = 1;
  FUN_10021780();
  local_14 = 0xffffffff;
  if (local_24 == (int *)0x0) {
    if (DAT_10388f90 == 1) {
      FUN_10180b3f(&DAT_100df3f4,1);
    }
    else {
      FUN_10180b7a(&DAT_100df3f4);
    }
    *unaff_FS_OFFSET = local_1c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102716bc();
}

