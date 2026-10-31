/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004986b4 */

int __cdecl
FUN_004986b4(double *param_1,undefined1 (*param_2) [16],uint param_3,char *param_4,int param_5,
            int param_6,size_t param_7,uint param_8,undefined4 param_9,int param_10,int *param_11)

{
  __acrt_fp_class _Var1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte local_c;
  byte local_8;
  
  if (param_2 == (undefined1 (*) [16])0x0) {
    *(undefined1 *)(param_11 + 7) = 1;
    param_11[6] = 0x16;
  }
  else if ((param_3 == 0) || (param_4 == (char *)0x0)) {
    *(undefined1 *)(param_11 + 7) = 1;
    param_11[6] = 0x16;
  }
  else {
    if (param_5 != 0) {
      if ((((param_6 == 0x41) || (param_6 == 0x45)) || (param_6 == 0x46)) ||
         (local_8 = 0, param_6 == 0x47)) {
        local_8 = 1;
      }
      if (((param_8 & 8) == 0) && (_Var1 = __acrt_fp_classify(param_1), _Var1 != 0)) {
        if ((*(int *)((int)param_1 + 4) < 1) && (*(int *)((int)param_1 + 4) < 0)) {
          local_c = 1;
        }
        else {
          local_c = 0;
        }
        iVar2 = FUN_00498868(_Var1,local_c,(char *)param_2,param_3,local_8);
        return iVar2;
      }
      if ((param_8 & 0x10) == 0) {
        iVar2 = 2;
      }
      else {
        iVar2 = 3;
      }
      iVar3 = 0;
      if ((param_8 & 0x20) != 0) {
        iVar3 = param_10;
      }
      if (param_6 < 0x62) {
        if ((param_6 == 0x61) || (param_6 == 0x41)) {
          iVar2 = FUN_00498c15((uint *)param_1,param_2,param_3,param_4,param_5,param_7,local_8,iVar2
                               ,iVar3,param_11);
          return iVar2;
        }
        iVar4 = param_6 + -0x45;
      }
      else {
        iVar4 = param_6 + -0x65;
      }
      if (iVar4 == 0) {
        iVar2 = FUN_00498a40((undefined4 *)param_1,(char *)param_2,param_3,param_4,param_5,param_7,
                             local_8,iVar2,iVar3,param_11);
        return iVar2;
      }
      if (iVar4 != 1) {
        iVar2 = FUN_004990ba((undefined4 *)param_1,(char *)param_2,param_3,param_4,param_5,param_7,
                             local_8,iVar2,iVar3,param_11);
        return iVar2;
      }
      iVar2 = FUN_00499031((undefined4 *)param_1,(char *)param_2,param_3,param_4,param_5,param_7,
                           iVar3,param_11);
      return iVar2;
    }
    *(undefined1 *)(param_11 + 7) = 1;
    param_11[6] = 0x16;
  }
  FUN_00495e14((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_11);
  return 0x16;
}

