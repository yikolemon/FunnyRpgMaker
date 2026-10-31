/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045f583 */

int __fastcall
FUN_0045f583(int *param_1,uint *param_2,char *param_3,undefined4 *param_4,int param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,uint param_9,
            undefined4 *param_10)

{
  undefined4 *puVar1;
  undefined4 unaff_ESI;
  undefined4 *in_stack_00000038;
  
  puVar1 = param_4;
  FUN_0045f950((int)param_1,param_3);
  if (param_1[1] == 0) {
    *(undefined1 *)(param_1 + 0x3b) = 0;
    FUN_0045fc85((int)(param_1 + 0x24));
    FUN_0045fc9b(param_1,param_2,param_1 + 0x24,(undefined4 *)&stack0xffffffe4,'\0',(uint *)0x0,
                 (uint *)0x0,(int *)&stack0xffffffe0);
    puVar1 = param_10;
    if (param_1[1] == 0) {
      if (((char)((uint)unaff_ESI >> 0x18) != '\0') && (param_1[0x28] < 0)) {
        *(undefined1 *)(param_1 + 0x3b) = 1;
        FUN_0045fc85((int)(param_1 + 0x24));
        FUN_0045fc9b(param_1,param_2,param_1 + 0x24,(undefined4 *)&stack0xfffffffc,'\0',(uint *)0x0,
                     (uint *)0x0,(int *)&stack0xfffffff8);
        puVar1 = in_stack_00000038;
        if (param_1[1] != 0) goto LAB_0045f62c;
      }
      FUN_00461f72(param_5);
    }
  }
LAB_0045f62c:
  *puVar1 = param_6;
  FUN_00461f8a(param_1 + 1,0);
  if (DAT_0050e8c0 != (param_9 ^ (uint)&param_4)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(param_9 ^ (uint)&param_4);
  }
  return param_1[1];
}

