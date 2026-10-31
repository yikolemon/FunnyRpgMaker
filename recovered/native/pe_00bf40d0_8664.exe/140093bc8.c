/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140093bc8 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_140093bc8(undefined8 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  
  if (DAT_140142c3c != '\0') {
    return;
  }
  LOCK();
  DAT_140142c38 = 1;
  UNLOCK();
  if (*(int *)*param_1 == 0) {
    if (DAT_140142c30 != DAT_14012ea80) {
      bVar1 = (byte)DAT_14012ea80 & 0x3f;
      (*(code *)((DAT_14012ea80 ^ DAT_140142c30) >> bVar1 |
                (DAT_14012ea80 ^ DAT_140142c30) << 0x40 - bVar1))(0,0,0);
    }
    puVar2 = &DAT_140142e60;
  }
  else {
    if (*(int *)*param_1 != 1) goto LAB_140093c37;
    puVar2 = &DAT_140142e78;
  }
  FUN_140095abc(puVar2);
LAB_140093c37:
  if (*(int *)*param_1 == 0) {
    FUN_140096684((undefined8 *)&DAT_140120258,(undefined8 *)&DAT_140120278);
  }
  FUN_140096684((undefined8 *)&DAT_140120280,(undefined8 *)&DAT_140120288);
  if (*(int *)param_1[1] == 0) {
    DAT_140142c3c = '\x01';
    *(undefined1 *)param_1[2] = 1;
  }
  return;
}

