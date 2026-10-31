/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001e874 */

undefined8
FUN_14001e874(undefined8 param_1,undefined8 param_2,char param_3,uint *param_4,int param_5)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  int *local_30;
  int local_20 [2];
  undefined *local_18;
  ulonglong local_10;
  
  local_10 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  uVar1 = *param_4;
  if (((uVar1 & 0x38000) == 0x8000) && ((char)param_4[1] == '0')) {
    *(undefined1 *)(param_4 + 1) = 0x20;
    *param_4 = uVar1;
  }
  bVar3 = (uVar1 >> 0xc & 1) == 0;
  puVar2 = &DAT_140eccd7c;
  if (bVar3) {
    puVar2 = &DAT_140ec7688;
  }
  local_18 = &DAT_140ecd00c;
  if (bVar3) {
    local_18 = &DAT_140ec9343;
  }
  if (param_3 != '\0') {
    local_18 = puVar2;
  }
  local_38 = 4 - (ulonglong)(param_5 == 0);
  local_30 = local_20;
  local_20[0] = param_5;
  FUN_14001efe0(param_1,param_2,param_4);
  if (DAT_140f17b40 == (local_10 ^ (ulonglong)auStack_58)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_10 ^ (ulonglong)auStack_58);
}

