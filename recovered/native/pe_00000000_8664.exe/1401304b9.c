/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401304b9 */

int FUN_1401304b9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_68;
  undefined4 local_60 [6];
  undefined8 local_48;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_98;
  local_60[0] = 4;
  local_48 = param_2;
  iVar1 = FUN_140129502(param_1,local_60,&local_68);
  if (iVar1 == 0) {
    local_78 = param_3;
    iVar1 = FUN_14012ff31();
    FUN_140129658(local_68,0);
  }
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_98)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_98);
}

