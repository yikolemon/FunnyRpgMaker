/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006b9e2 */

undefined8 FUN_14006b9e2(undefined8 *param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined1 local_70 [56];
  undefined1 local_38 [32];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  pcVar1 = (char *)*param_1;
  if (pcVar1 == (char *)*param_2) {
    if (*pcVar1 == '\x02') {
      uVar2 = CONCAT71((int7)((ulonglong)param_1[2] >> 8),param_1[2] == param_2[2]);
    }
    else if (*pcVar1 == '\x01') {
      uVar2 = CONCAT71((int7)((ulonglong)param_1[1] >> 8),param_1[1] == param_2[1]);
    }
    else {
      uVar2 = CONCAT71((int7)((ulonglong)param_1[3] >> 8),param_1[3] == param_2[3]);
    }
    return uVar2;
  }
  FUN_14000169c(local_38,"cannot compare iterators of different containers");
  FUN_14006baa2(local_70,0xd4,local_38,pcVar1);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_70,&DAT_1401966c0);
}

