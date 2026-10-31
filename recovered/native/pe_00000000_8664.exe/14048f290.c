/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14048f290 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14048f290(undefined8 *param_1)

{
  undefined *puVar1;
  
  if (DAT_140632274 != '\0') {
    return;
  }
  LOCK();
  DAT_140632270 = 1;
  UNLOCK();
  if (*(int *)*param_1 == 0) {
    if (DAT_140632268 != ram0x000140613b10) {
      FUN_1404b9600(0,0,0);
    }
    puVar1 = &DAT_140632388;
  }
  else {
    if (*(int *)*param_1 != 1) goto LAB_14048f2ff;
    puVar1 = &DAT_1406323a0;
  }
  FUN_14048f798(puVar1);
LAB_14048f2ff:
  if (*(int *)*param_1 == 0) {
    FUN_14049096c(&DAT_14059d348,&DAT_14059d368);
  }
  FUN_14049096c(&DAT_14059d370,&DAT_14059d378);
  if (*(int *)param_1[1] == 0) {
    DAT_140632274 = '\x01';
    *(undefined1 *)param_1[2] = 1;
  }
  return;
}

