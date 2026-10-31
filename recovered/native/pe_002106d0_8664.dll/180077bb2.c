/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180077bb2 */

void FUN_180077bb2(longlong param_1,char *param_2)

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
  iVar3 = FUN_180078646(lVar1);
  local_40 = iVar3;
  local_3c[0] = FUN_180078646(lVar1);
  uVar4 = *(int *)(param_1 + 0x3c) - uVar2;
  if (uVar4 < local_3c[0]) {
    local_c0 = CONCAT44(local_c0._4_4_,uVar4);
    local_68 = 0x6e000000ab;
    pcStack_60 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\FileCoder.hpp"
    ;
    local_58 = "void __cdecl FileCoder::Unpack(const bool &)";
    FUN_180072a20(local_a8);
    local_e0 = "{}LZ4 decompression failed. Compressed size: {}, Remaining size: {}";
    local_d8 = 0x43;
    FUN_18007e521(local_88,&local_e0,local_a8,local_3c,&local_c0);
    FUN_18006f972(local_150,local_88);
                    /* WARNING: Subroutine does not return */
    FUN_18026d5b0(local_150,&DAT_1803a63b0);
  }
  local_88[0] = local_88[0] & 0xffffff00;
  local_68 = 0;
  pcStack_60 = (char *)0x0;
  local_58 = (char *)0x0;
  FUN_18007e5fa(&local_68,iVar3 + uVar2);
  iVar3 = FUN_1800fb149((ulonglong)*(uint *)(param_1 + 0x38) + *(longlong *)(param_1 + 0x30),
                        local_68 + (ulonglong)uVar2,local_3c[0],iVar3);
  if (-1 < iVar3) {
    local_88[0] = 0;
    FUN_180077ad8(lVar1);
    FUN_1802a82f0(local_68,(ulonglong)*(uint *)(param_1 + 0x38) + *(longlong *)(param_1 + 0x30),
                  (ulonglong)uVar2);
    FUN_1800775e0(lVar1,&local_68);
    if (*param_2 == '\x01') {
      FUN_180077ad8(lVar1,&local_44);
    }
    FUN_180004cea(&local_68);
    return;
  }
  local_c0 = 0x71000000b3;
  local_b8 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\FileCoder.hpp"
  ;
  local_b0 = "void __cdecl FileCoder::Unpack(const bool &)";
  FUN_180072a20(local_a8);
  local_d0 = "{}LZ4 decompression failed. Compressed size: {}, Decompressed size: {}";
  local_c8 = 0x46;
  FUN_18007e521(local_88,&local_d0,local_a8,local_3c,&local_40);
  FUN_18006f972(local_118,local_88);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_118,&DAT_1803a63b0);
}

