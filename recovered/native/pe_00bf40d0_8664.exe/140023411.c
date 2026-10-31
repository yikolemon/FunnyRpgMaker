/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140023411 */

int FUN_140023411(longlong *param_1,undefined8 param_2,char *param_3,undefined8 *param_4,
                 undefined4 *param_5)

{
  size_t sVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [44];
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStack_68;
  sVar1 = strlen(param_3);
  puVar2 = (undefined8 *)FUN_14001e961(*param_1,(int)sVar1 + 6,&local_3c);
  if (local_3c == 0) {
    uVar3 = (ulonglong)(int)sVar1;
    FUN_1400b3550(puVar2,(undefined8 *)param_3,uVar3);
    *(undefined4 *)((longlong)puVar2 + uVar3) = 0x7273722f;
    *(undefined2 *)((longlong)puVar2 + uVar3 + 4) = 99;
    *param_4 = puVar2;
    *param_5 = 0;
  }
  if (DAT_14012ea80 == (local_38 ^ (ulonglong)auStack_68)) {
    return local_3c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_38 ^ (ulonglong)auStack_68);
}

