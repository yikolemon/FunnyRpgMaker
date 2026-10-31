/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042233a */

int __fastcall FUN_0042233a(int *param_1,int *param_2,uint param_3,int param_4,int *param_5)

{
  int iVar1;
  undefined4 in_stack_ffffffc4;
  int iVar2;
  uint in_stack_ffffffdc;
  int *in_stack_ffffffe0;
  int *in_stack_ffffffe4;
  int *piVar3;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&stack0xffffffd8;
  iVar2 = *param_1;
  iVar1 = FUN_004203f3(in_stack_ffffffc4,param_2,param_3,&local_18,(uint *)&stack0xffffffe4);
  if (iVar1 != 0) goto LAB_00422380;
  piVar3 = in_stack_ffffffe4;
  iVar1 = FUN_00420798(param_1,param_2,local_18,in_stack_ffffffe4,0x504f5354,'\x01',&stack0xffffffe0
                       ,(uint *)&stack0xffffffdc,iVar2,in_stack_ffffffdc,in_stack_ffffffe0,
                       in_stack_ffffffe4);
  if (iVar1 == 0) {
    iVar1 = FUN_00422635(param_1,param_2,(int)in_stack_ffffffe0,in_stack_ffffffdc,param_4,param_5);
    FUN_0041c607(iVar2,(int)in_stack_ffffffe0);
    if (iVar1 != 0) goto LAB_00422380;
    *(undefined4 *)*param_5 = 1;
  }
  else {
    iVar1 = FUN_00420798(param_1,param_2,local_18,in_stack_ffffffe4,0x73666e74,'\0',&stack0xffffffe0
                         ,(uint *)&stack0xffffffdc,iVar2,in_stack_ffffffdc,in_stack_ffffffe0,piVar3)
    ;
    if (iVar1 != 0) goto LAB_00422380;
    iVar1 = FUN_004228e2(param_1,param_2,(int)in_stack_ffffffe0,in_stack_ffffffdc,
                         param_4 % (int)in_stack_ffffffdc,param_5);
    FUN_0041c607(iVar2,(int)in_stack_ffffffe0);
    if (iVar1 != 0) goto LAB_00422380;
    *(uint *)*param_5 = in_stack_ffffffdc;
    *(int *)(*param_5 + 4) = param_4 % (int)in_stack_ffffffdc;
  }
  iVar1 = 0;
LAB_00422380:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&stack0xffffffd8)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&stack0xffffffd8);
  }
  return iVar1;
}

