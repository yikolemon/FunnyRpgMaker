/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019c618 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_14019c618(undefined8 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  
  if (DAT_140f32744 != '\0') {
    return;
  }
  LOCK();
  DAT_140f32740 = 1;
  UNLOCK();
  if (*(int *)*param_1 == 0) {
    if (DAT_140f32738 != DAT_140f17b40) {
      bVar1 = (byte)DAT_140f17b40 & 0x3f;
      (*(code *)((DAT_140f17b40 ^ DAT_140f32738) >> bVar1 |
                (DAT_140f17b40 ^ DAT_140f32738) << 0x40 - bVar1))(0,0,0);
    }
    puVar2 = &DAT_140f32868;
  }
  else {
    if (*(int *)*param_1 != 1) goto LAB_14019c687;
    puVar2 = &DAT_140f32880;
  }
  FUN_14019e52c(puVar2);
LAB_14019c687:
  if (*(int *)*param_1 == 0) {
    FUN_14019f770(&DAT_140ee1740,&DAT_140ee1760);
  }
  FUN_14019f770(&DAT_140ee1768,&DAT_140ee1770);
  if (*(int *)param_1[1] == 0) {
    DAT_140f32744 = '\x01';
    *(undefined1 *)param_1[2] = 1;
  }
  return;
}

