/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140289082 */

void FUN_140289082(longlong param_1,char *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_150 [56];
  undefined1 local_118 [56];
  char *local_e0;
  undefined8 local_d8;
  char *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  char *local_b8;
  char *local_b0;
  undefined1 local_a8 [32];
  uint local_88 [8];
  longlong local_68;
  char *pcStack_60;
  char *local_58;
  uint local_44;
  int local_40;
  uint local_3c [3];
  
  local_3c[1] = 0xfffffffe;
  local_3c[2] = 0xffffffff;
  lVar1 = param_1 + 0x10;
  uVar2 = *(uint *)(param_1 + 0x38);
  local_44 = uVar2;
  iVar3 = FUN_140289b16(lVar1);
  local_40 = iVar3;
  local_3c[0] = FUN_140289b16(lVar1);
  uVar4 = *(int *)(param_1 + 0x3c) - uVar2;
  if (uVar4 < local_3c[0]) {
    local_c0 = CONCAT44(local_c0._4_4_,uVar4);
    local_68 = 0x6e000000ab;
    pcStack_60 = "ion";
    local_58 = "g() too many times!";
    FUN_140283ef0(local_a8);
    local_e0 = " key";
    local_d8 = 0x43;
    FUN_14028f9f1(local_88,&local_e0,local_a8,local_3c,&local_c0);
    FUN_140280e42(local_150,local_88);
                    /* WARNING: Subroutine does not return */
    FUN_14047ea80(local_150,&DAT_1405b7880);
  }
  local_88[0] = local_88[0] & 0xffffff00;
  local_68 = 0;
  pcStack_60 = (char *)0x0;
  local_58 = (char *)0x0;
  FUN_14028faca(&local_68,iVar3 + uVar2);
  iVar3 = FUN_14030c619((ulonglong)*(uint *)(param_1 + 0x38) + *(longlong *)(param_1 + 0x30),
                        local_68 + (ulonglong)uVar2,local_3c[0],iVar3);
  if (-1 < iVar3) {
    local_88[0] = 0;
    FUN_140288fa8(lVar1);
    FUN_1404b97c0(local_68,(ulonglong)*(uint *)(param_1 + 0x38) + *(longlong *)(param_1 + 0x30),
                  (ulonglong)uVar2);
    FUN_140288ab0(lVar1,&local_68);
    if (*param_2 == '\x01') {
      FUN_140288fa8(lVar1,&local_44);
    }
    FUN_1402161ba(&local_68);
    return;
  }
  local_c0 = 0x71000000b3;
  local_b8 = "ion";
  local_b0 = "g() too many times!";
  FUN_140283ef0(local_a8);
  local_d0 = "InBody";
  local_c8 = 0x46;
  FUN_14028f9f1(local_88,&local_d0,local_a8,local_3c,&local_40);
  FUN_140280e42(local_118,local_88);
                    /* WARNING: Subroutine does not return */
  FUN_14047ea80(local_118,&DAT_1405b7880);
}

