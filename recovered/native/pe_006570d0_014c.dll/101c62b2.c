/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c62b2 */

int __fastcall
FUN_101c62b2(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,int *param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_28;
  uVar1 = *param_1;
  iVar2 = FUN_101c437b();
  if (iVar2 != 0) goto LAB_101c62f8;
  local_28 = uVar1;
  iVar2 = FUN_101c4720(param_1,param_2,local_18,local_1c,0x504f5354,1,&local_20,&local_24);
  if (iVar2 == 0) {
    iVar2 = FUN_101c65ad(local_20,local_24,param_4,param_5);
    FUN_101c0017(local_28,local_20);
    if (iVar2 != 0) goto LAB_101c62f8;
    *(undefined4 *)*param_5 = 1;
  }
  else {
    iVar2 = FUN_101c4720(param_1,param_2,local_18,local_1c,0x73666e74,0,&local_20,&local_24);
    if (iVar2 != 0) goto LAB_101c62f8;
    iVar2 = FUN_101c685a(local_20,local_24,param_4 % local_24,param_5);
    FUN_101c0017(local_28,local_20);
    if (iVar2 != 0) goto LAB_101c62f8;
    *(int *)*param_5 = local_24;
    *(int *)(*param_5 + 4) = param_4 % local_24;
  }
  iVar2 = 0;
LAB_101c62f8:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_28)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar2;
}

