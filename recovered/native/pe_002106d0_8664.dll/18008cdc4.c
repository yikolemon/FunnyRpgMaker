/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008cdc4 */

void FUN_18008cdc4(undefined8 param_1,longlong *param_2,uint *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 local_68 [56];
  undefined1 local_30 [32];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  uVar2 = (ulonglong)*param_3;
  if (uVar2 == 0xffffffff) {
    lVar1 = *param_2;
    uVar2 = (ulonglong)(uint)((int)param_2[1] - (int)lVar1);
  }
  else {
    lVar1 = *param_2;
    if ((ulonglong)(param_2[1] - lVar1) < uVar2) {
      FUN_180001e92(local_30,"WriteBytesVec: size is larger than buffer size");
      FUN_18007f584(local_68,local_30);
                    /* WARNING: Subroutine does not return */
      FUN_18026d5b0(local_68,&DAT_1803a64e0);
    }
  }
  FUN_18008ce6a(param_1,lVar1,uVar2);
  return;
}

