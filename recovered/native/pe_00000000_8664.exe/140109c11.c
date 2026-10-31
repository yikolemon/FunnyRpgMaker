/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140109c11 */

void FUN_140109c11(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  uVar3 = DAT_140f1c644;
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  if (DAT_140f1c640 == '\x01') {
    puVar2 = (undefined4 *)FUN_140088c06();
    local_20 = 0;
    FUN_14008fda3(puVar2 + 8,0);
    FUN_140085d59(puVar2 + 10,0);
    FUN_14008fe7f(*puVar2);
    FUN_14007ab2c(3,0);
    FUN_14007ab2c(4,0);
    uVar1 = 0xa20a7;
  }
  else {
    uVar3 = DAT_140f1c644 & 0xfffffff7;
    uVar1 = 0x80000;
  }
  if (DAT_140f1c641 == '\0') {
    local_20 = 0;
    FUN_14007ae77(2);
  }
  FUN_140085d7e("Window with a DockSpace",&DAT_140f30935,uVar1);
  if (DAT_140f1c641 == '\0') {
    FUN_14007af87(1);
  }
  if (DAT_140f1c640 == '\x01') {
    FUN_14007af87(2);
  }
  uVar1 = FUN_140091695("MyDockSpace");
  local_20 = 0;
  FUN_14009aa30(uVar1,&local_20,uVar3,0);
  FUN_140088c18();
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_48);
}

