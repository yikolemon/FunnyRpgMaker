/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18027ddc0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18027ddc0(undefined8 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  
  if (DAT_180420da4 != '\0') {
    return;
  }
  LOCK();
  DAT_180420da0 = 1;
  UNLOCK();
  if (*(int *)*param_1 == 0) {
    if (DAT_180420d98 != DAT_180402640) {
      bVar1 = (byte)DAT_180402640 & 0x3f;
      (*(code *)((DAT_180402640 ^ DAT_180420d98) >> bVar1 |
                (DAT_180402640 ^ DAT_180420d98) << 0x40 - bVar1))(0,0,0);
    }
    puVar2 = &DAT_180420eb8;
  }
  else {
    if (*(int *)*param_1 != 1) goto LAB_18027de2f;
    puVar2 = &DAT_180420ed0;
  }
  FUN_18027e2c8(puVar2);
LAB_18027de2f:
  if (*(int *)*param_1 == 0) {
    FUN_18027f49c(&DAT_18038be78,&DAT_18038be98);
  }
  FUN_18027f49c(&DAT_18038bea0,&DAT_18038bea8);
  if (*(int *)param_1[1] == 0) {
    DAT_180420da4 = '\x01';
    *(undefined1 *)param_1[2] = 1;
  }
  return;
}

