//
//  FISPerson.h
//  ObjectOrientedPeople
//
//  Created by Christopher Webb-Orenstein on 6/13/16.
//  Copyright © 2016 al-tyus.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FISPerson : NSObject

@property (strong, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSUInteger ageInYears;
@property (nonatomic, readonly) NSUInteger heightInInches;
@property (strong, nonatomic, readonly) NSMutableArray *skills;


-(instancetype)init;

-(instancetype)initWithName:(NSString *)name;

-(instancetype)initWithName:(NSString *)name ageInYears:(NSUInteger)ageInYears;

-(instancetype)initWithName:(NSString *)name ageInYears:(NSUInteger)ageInYears heightInInches:(NSUInteger)heightInInches;


-(NSString *)celebrateBirthday;

-(void)learnSkillBash;

-(void)learnSkillXcode;

-(void)learnSkillObjectiveC;

-(void)learnSkillObjectOrientedProgramming;

-(void)learnSkillInterfaceBuilder;

-(BOOL)isQualifiedTutor;


@end
