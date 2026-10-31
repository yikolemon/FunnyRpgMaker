/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140010945 */

longlong *
FUN_140010945(longlong *param_1,undefined8 *param_2,uint param_3,int *param_4,longlong param_5)

{
  undefined1 auStackY_68 [32];
  undefined2 *local_40;
  undefined8 local_38;
  undefined2 local_2a;
  undefined8 local_28;
  undefined8 uStack_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14012ea80 ^ (ulonglong)auStackY_68;
  local_2a = (undefined2)param_3;
  if (((char)param_4[2] == '\0') || ((char)param_4[2] == 'c')) {
    local_40 = &local_2a;
    local_38 = 1;
    FUN_1400111a4(param_1,param_2,(longlong *)&local_40,param_4);
  }
  else {
    local_18 = param_4[4];
    local_28 = *(undefined8 *)param_4;
    uStack_20 = *(undefined8 *)(param_4 + 2);
    FUN_140010cfd(param_1,param_2,param_3,(int *)&local_28,param_5);
  }
  if (DAT_14012ea80 == (local_10 ^ (ulonglong)auStackY_68)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_10 ^ (ulonglong)auStackY_68);
}

