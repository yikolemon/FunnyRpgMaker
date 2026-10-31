/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140348897 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 Unwind_140348897(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 unaff_EBP;
  undefined4 unaff_EDI;
  longlong unaff_R13;
  longlong unaff_R14;
  float fVar4;
  undefined8 in_stack_00000020;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  float fStack000000000000004c;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined8 in_stack_00000078;
  float in_stack_00000080;
  float fStack0000000000000084;
  float in_stack_00000088;
  float fStack000000000000008c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  ulonglong in_stack_00000098;
  undefined4 uVar7;
  
  uVar3 = (undefined4)((ulonglong)in_stack_00000020 >> 0x20);
  *(int *)(param_1 + -0xe76b73b) = *(int *)(param_1 + -0xe76b73b) + -1;
  FUN_140313264(param_1,0);
  fVar4 = *(float *)(unaff_R14 + 400);
  uVar1 = *(undefined8 *)(unaff_R14 + 0x158);
  uVar5 = CONCAT44(uVar3,0xbf800000);
  FUN_14031389a(&stack0x00000090);
  in_stack_00000080 = (float)uVar1;
  in_stack_00000088 = fStack0000000000000090 + in_stack_00000080;
  fStack0000000000000084 = fVar4 + (float)((ulonglong)uVar1 >> 0x20);
  fStack000000000000008c = fStack0000000000000084 + fStack0000000000000094;
  FUN_1403229e4(&stack0x00000090,0);
  cVar2 = FUN_140322b86(&stack0x00000080,unaff_EBP,0,0,uVar5);
  if (cVar2 != '\0') {
    unaff_EDI = FUN_140344d3b(&stack0x00000080,unaff_EBP,(longlong)&stack0x00000078 + 7,
                              (longlong)&stack0x00000078 + 6,uVar5 & 0xffffffff00000000);
    FUN_140313fde(&stack0x00000080,unaff_EBP,0);
    if (in_stack_00000078._7_1_ == '\x01') {
      FUN_14032a406(7);
    }
    uVar1 = *(undefined8 *)(unaff_R13 + 0x1238);
    _uStack0000000000000068 = *(undefined8 *)(unaff_R13 + 0x1240);
    in_stack_00000050 = *(undefined8 *)(unaff_R13 + 0x1238);
    in_stack_00000058 = *(undefined8 *)(unaff_R13 + 0x1240);
    uStack0000000000000060 = (undefined4)uVar1;
    uStack0000000000000064 = (undefined4)((ulonglong)uVar1 >> 0x20);
    uVar3 = uStack0000000000000064;
    uVar7 = uStack0000000000000060;
    _uStack0000000000000060 = uVar1;
    FUN_140310917(uVar7,uVar3,uStack0000000000000068,(longlong)&stack0x00000048 + 4,&stack0x00000048
                 );
    if (in_stack_00000078._7_1_ != '\0' || in_stack_00000078._6_1_ != '\0') {
      fVar4 = DAT_1404ccda8;
      if (in_stack_00000078._6_1_ == '\0') {
        fVar4 = DAT_1404ed040;
      }
      fVar4 = fVar4 + in_stack_00000040._4_4_;
      in_stack_00000040._4_4_ = DAT_1404bda40;
      if (fVar4 <= DAT_1404bda40) {
        in_stack_00000040._4_4_ = fVar4;
      }
      in_stack_00000040._4_4_ = (float)(~-(uint)(fVar4 < 0.0) & (uint)in_stack_00000040._4_4_);
      fStack000000000000004c = (float)FUN_140496a10(fStack000000000000004c + _DAT_1404efe54);
    }
    FUN_140310a58(fStack000000000000004c,uStack0000000000000048,in_stack_00000040._4_4_,
                  &stack0x00000060,(longlong)&stack0x00000060 + 4);
    in_stack_00000040._4_4_ = in_stack_00000040._4_4_ + _DAT_1404effb8;
    fVar4 = DAT_1404bda40;
    if (in_stack_00000040._4_4_ <= DAT_1404bda40) {
      fVar4 = in_stack_00000040._4_4_;
    }
    lVar6 = (longlong)&stack0x00000050 + 4;
    FUN_140310a58(fStack000000000000004c,uStack0000000000000048,
                  ~-(uint)(in_stack_00000040._4_4_ < 0.0) & (uint)fVar4,&stack0x00000050,lVar6);
    uVar7 = (undefined4)((ulonglong)lVar6 >> 0x20);
    fVar4 = *(float *)(*(longlong *)(unaff_R13 + 0x1318) + 0x48) * *(float *)(unaff_R13 + 0x1328) *
            DAT_1404efc60;
    fVar4 = (float)(int)((int)fVar4 - (uint)(fVar4 < 0.0 && (float)(int)fVar4 != fVar4)) +
            fStack000000000000008c;
    uVar1 = *(undefined8 *)(unaff_R14 + 800);
    uVar3 = FUN_1403127da(&stack0x00000050);
    FUN_1403a3dce(uVar1,in_stack_00000080,in_stack_00000088,fVar4,CONCAT44(uVar7,uVar3));
    uVar3 = FUN_1403127da(&stack0x00000060);
    FUN_14031288e(0,uVar3);
    FUN_140313298(CONCAT44(fStack0000000000000084,in_stack_00000080));
    FUN_140312af5(1);
  }
  if (ram0x000140613b10 != (in_stack_00000098 ^ (ulonglong)&stack0x00000000)) {
                    /* WARNING: Subroutine does not return */
    FUN_14044aba0(in_stack_00000098 ^ (ulonglong)&stack0x00000000);
  }
  return unaff_EDI;
}

