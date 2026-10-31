/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401117dc */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1401117dc(undefined8 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  
  if (DAT_140354b74 != '\0') {
    return;
  }
  LOCK();
  DAT_140354b70 = 1;
  UNLOCK();
  if (*(int *)*param_1 == 0) {
    if (DAT_140354b68 != DAT_1401c9640) {
      bVar1 = (byte)DAT_1401c9640 & 0x3f;
      (*(code *)((DAT_1401c9640 ^ DAT_140354b68) >> bVar1 |
                (DAT_1401c9640 ^ DAT_140354b68) << 0x40 - bVar1))(0,0,0);
    }
    puVar2 = &DAT_140354c98;
  }
  else {
    if (*(int *)*param_1 != 1) goto LAB_14011184b;
    puVar2 = &DAT_140354cb0;
  }
  FUN_1401136fc(puVar2);
LAB_14011184b:
  if (*(int *)*param_1 == 0) {
    FUN_1401151b8(&DAT_140178e20,&DAT_140178e40);
  }
  FUN_1401151b8(&DAT_140178e48,&DAT_140178e50);
  if (*(int *)param_1[1] == 0) {
    DAT_140354b74 = '\x01';
    *(undefined1 *)param_1[2] = 1;
  }
  return;
}

