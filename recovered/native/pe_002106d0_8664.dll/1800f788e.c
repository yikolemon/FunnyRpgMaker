/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f788e */

void FUN_1800f788e(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 unaff_RBX;
  
  if (*(char *)((longlong)param_1 + 0xc1) != '\x01') {
    FUN_1802472c0(param_1 + 2,param_2);
    (**(code **)(*param_1 + 0x28))
              (param_1,param_3,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_4) & 0xffffffff);
    FUN_180247230(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800f7329(3);
}

