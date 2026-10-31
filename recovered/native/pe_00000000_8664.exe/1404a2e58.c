/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404a2e58 */

void FUN_1404a2e58(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 local_res8;
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 local_20 [2];
  undefined8 *local_18 [2];
  
  local_res8 = param_1;
  if (DAT_1406614e0 == -1) {
LAB_1404a2ebc:
    local_18[0] = &local_res8;
    local_24 = 4;
    local_20[0] = 4;
    FUN_1404a3948(local_28,local_20,local_18,&local_24);
  }
  else {
    if (DAT_1406614e0 == 0) {
      lVar1 = FUN_1404a3748(2,"terator\'",&DAT_140564ba8,&DAT_140564bb0);
      if (lVar1 == 0) goto LAB_1404a2ebc;
    }
    FUN_1404b9600(local_res8,param_2,param_3,param_4);
  }
  return;
}

