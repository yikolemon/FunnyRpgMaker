/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f92fe */

void FUN_1800f92fe(longlong *param_1,undefined4 *param_2,undefined1 param_3)

{
  undefined8 unaff_RBX;
  longlong *local_38;
  char local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_38 = param_1 + 4;
  FUN_180044980();
  local_30 = '\x01';
  if (*(char *)((longlong)param_1 + 0xc1) != '\x01') {
    *(undefined4 *)((longlong)param_1 + 0xc) = *param_2;
    (**(code **)(*param_1 + 0x28))
              (param_1,&local_38,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_3) & 0xffffffff);
    if (local_30 == '\x01') {
      FUN_18023d6e0(local_38);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800f7329(3);
}

