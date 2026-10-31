/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002335b */

int FUN_14002335b(longlong *param_1,undefined8 param_2,char *param_3,undefined8 *param_4,
                 undefined4 *param_5)

{
  undefined8 uVar1;
  size_t sVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [44];
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStack_68;
  sVar2 = strlen(param_3);
  puVar3 = (undefined8 *)FUN_14001e961(*param_1,(int)sVar2 + 0x12,&local_3c);
  if (local_3c == 0) {
    uVar4 = (ulonglong)(int)sVar2;
    FUN_1400b3550(puVar3,(undefined8 *)param_3,uVar4);
    uVar1 = s____namedfork_rsrc_14011b6c4._8_8_;
    *(undefined8 *)((longlong)puVar3 + uVar4) = s____namedfork_rsrc_14011b6c4._0_8_;
    *(undefined8 *)((char *)((longlong)puVar3 + uVar4) + 8) = uVar1;
    *(undefined2 *)((longlong)puVar3 + uVar4 + 0x10) = 99;
    *param_4 = puVar3;
    *param_5 = 0;
  }
  if (DAT_14012ea80 == (local_38 ^ (ulonglong)auStack_68)) {
    return local_3c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_38 ^ (ulonglong)auStack_68);
}

