/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140130098 */

int FUN_140130098(undefined8 *param_1,undefined8 param_2,char *param_3,longlong *param_4,
                 undefined4 *param_5)

{
  size_t sVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [44];
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  sVar1 = strlen(param_3);
  lVar2 = FUN_14012afda(*param_1,(int)sVar1 + 6,&local_3c);
  if (local_3c == 0) {
    lVar3 = (longlong)(int)sVar1;
    FUN_1401c5180(lVar2,param_3,lVar3);
    *(undefined4 *)(lVar2 + lVar3) = 0x7273722f;
    *(undefined2 *)(lVar2 + 4 + lVar3) = 99;
    *param_4 = lVar2;
    *param_5 = 0;
  }
  if (DAT_140f17b40 == (local_38 ^ (ulonglong)auStack_68)) {
    return local_3c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_38 ^ (ulonglong)auStack_68);
}

