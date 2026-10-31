/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003c4be */

void FUN_18003c4be(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 local_48 [40];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(param_2 + 0x18);
  FUN_18003ae98(local_48,3,param_1 + 8);
  FUN_180024aab(((int)(SUB168(SEXT816(lVar1) * SEXT816(0x346dc5d63886594b),8) >> 0xb) -
                (SUB164(SEXT816(lVar1) * SEXT816(0x346dc5d63886594b),0xc) >> 0x1f)) +
                ((int)(SUB168(SEXT816(lVar1) * ZEXT816(0xd6bf94d5e57a42bd),8) >> 0x17) -
                ((int)(lVar1 / -0x6769800000000000) + (int)(lVar1 >> 0x3f))) * -1000,param_4);
  FUN_18003af0c(local_48);
  return;
}

