//
//  ViewViewController.m
//  LibSoundCloud

//  Created by Stofkat.org on 23-05-14.
//  Copyright (c) 2014 Stofkat. All rights reserved.
//

#import "MainViewController.h"
#import "SoundCloud.h"
@interface MainViewController ()

@end

@implementation MainViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    
	// Do any additional setup after loading the view, typically from a nib.
}
- (IBAction)btnSearchClicked:(id)sender {
    [[SoundCloud sharedStore] searchForTracksWithQuery:self.txtSearchField.text];
}
- (IBAction)playlists_pressed:(id)sender {
    
}

- (IBAction)btnStreamClicked:(id)sender {
    
   NSData *data = [[SoundCloud sharedStore] downloadTrackData:self.txtURLField.text];
    
    self.audioPlayer = [[AVAudioPlayer alloc]initWithData:data error:nil];
    [self.audioPlayer play];
}

- (IBAction)btnGetUserSongsClicked:(id)sender {
    //[self.soundCloud getUserTracks];

}

- (IBAction)loginPressed:(id)sender {
    [[SoundCloud sharedStore] login];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
