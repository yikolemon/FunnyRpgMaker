/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140287600 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140287600(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 ****ppppuVar4;
  undefined8 in_stack_fffffffffffffed8;
  undefined4 uVar6;
  ulonglong uVar5;
  undefined8 in_stack_fffffffffffffee0;
  undefined4 uVar7;
  undefined1 local_110 [56];
  undefined1 local_d8 [56];
  undefined1 local_a0 [56];
  undefined1 local_68 [32];
  undefined8 ***local_48 [3];
  ulonglong local_30;
  undefined8 local_28;
  
  uVar6 = (undefined4)((ulonglong)in_stack_fffffffffffffed8 >> 0x20);
  uVar7 = (undefined4)((ulonglong)in_stack_fffffffffffffee0 >> 0x20);
  local_28 = 0xfffffffffffffffe;
  FUN_140214a5a(local_48);
  ppppuVar4 = local_48;
  if (7 < local_30) {
    ppppuVar4 = (undefined8 ****)local_48[0];
  }
  uVar5 = CONCAT44(uVar6,3);
  uVar2 = (*(code *)s_GetDateFormatW_14059dda8._0_8_)
                    (ppppuVar4,0x80000000,1,0,uVar5,CONCAT44(uVar7,0x80),0);
  *(undefined8 *)(param_1 + 8) = uVar2;
  FUN_1402125bc(local_48);
  if (*(longlong *)(param_1 + 8) == 0) {
    FUN_140214a5a(local_68,param_2);
    FUN_14028733b(local_48,"er",local_68);
    FUN_140287392(local_110,local_48);
                    /* WARNING: Subroutine does not return */
    FUN_14047ea80(local_110,0x1405b7910);
  }
  lVar3 = (*ram0x00014059dda0)(*(longlong *)(param_1 + 8),0,2,0,uVar5 & 0xffffffff00000000,0);
  *(longlong *)(param_1 + 0x10) = lVar3;
  if (lVar3 == 0) {
    (*ram0x00014059dd60)(*(undefined8 *)(param_1 + 8));
    FUN_140214a5a(local_68,param_2);
    FUN_14028733b(local_48,"r",local_68);
    FUN_140287392(local_d8,local_48);
                    /* WARNING: Subroutine does not return */
    FUN_14047ea80(local_d8,0x1405b7910);
  }
  lVar3 = (*(code *)s_GlobalFree_14059e0f0._0_8_)(lVar3,4,0,0,0);
  *(longlong *)(param_1 + 0x18) = lVar3;
  pcVar1 = ram0x00014059dd60;
  if (lVar3 != 0) {
    *(longlong *)(param_1 + 0x20) = lVar3;
    return;
  }
  (*ram0x00014059dd60)(*(undefined8 *)(param_1 + 0x10));
  (*pcVar1)(*(undefined8 *)(param_1 + 8));
  FUN_140214a5a(local_68,param_2);
  FUN_14028733b(local_48,&DAT_14059864c,local_68);
  FUN_140287392(local_a0,local_48);
                    /* WARNING: Subroutine does not return */
  FUN_14047ea80(local_a0,0x1405b7910);
}

