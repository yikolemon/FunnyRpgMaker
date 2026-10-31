/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102424d0 */

void __thiscall
FUN_102424d0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            int param_5,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined1 local_50 [64];
  undefined1 local_10;
  byte local_f [7];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  local_10 = 0x25;
  uVar1 = *(uint *)(param_5 + 0x14);
  pbVar4 = local_f;
  if ((uVar1 & 0x20) != 0) {
    local_f[0] = 0x2b;
    pbVar4 = local_f + 1;
  }
  if ((uVar1 & 8) != 0) {
    *pbVar4 = 0x23;
    pbVar4 = pbVar4 + 1;
  }
  *pbVar4 = 0x6c;
  if ((uVar1 & 0xe00) == 0x400) {
    bVar2 = 0x6f;
  }
  else if ((uVar1 & 0xe00) == 0x800) {
    bVar2 = ~((char)uVar1 << 3) & 0x20U | 0x58;
  }
  else {
    bVar2 = 100;
  }
  pbVar4[1] = bVar2;
  pbVar4[2] = 0;
  iVar3 = FUN_1007c87c(local_50,0x40,&local_10,param_7);
  if (iVar3 < 0) {
    *param_2 = param_3;
    param_2[1] = param_4;
  }
  else {
    FUN_10242e60(param_1,param_2,param_3,param_4,param_5,param_6,local_50,iVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

