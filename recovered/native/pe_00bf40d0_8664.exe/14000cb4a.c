/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000cb4a */

undefined8 * FUN_14000cb4a(undefined8 *param_1,undefined8 *param_2,float param_3)

{
  uint uVar1;
  char *pcVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  char *local_58 [2];
  char local_48;
  char local_47 [23];
  ulonglong local_30 [3];
  
  local_30[0] = DAT_14012ea80 ^ (ulonglong)auStack_88;
  if (NAN(param_3)) {
    uVar1 = FUN_140095fc0((uint)param_3);
    pcVar2 = &local_48;
    if (uVar1 != 0) {
      pcVar2 = local_47;
      local_48 = '-';
    }
    pcVar2[2] = 'n';
    pcVar2[0] = 'n';
    pcVar2[1] = 'a';
    pcVar2 = pcVar2 + 3;
    if (pcVar2 != &local_48) goto LAB_14000cb9a;
  }
  local_60 = 0;
  local_68 = 0;
  FUN_14000cc14((longlong *)local_58,(undefined1 (*) [32])&local_48,(undefined1 (*) [32])local_30,
                (uint)param_3);
  pcVar2 = local_58[0];
LAB_14000cb9a:
  FUN_14000beb2(param_1,&local_48,pcVar2,param_2);
  if (DAT_14012ea80 != (local_30[0] ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_30[0] ^ (ulonglong)auStack_88);
  }
  return param_1;
}

